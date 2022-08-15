#pragma once
#include<iostream>
#include<assert.h>
using namespace std;
namespace plq
{
    class string
    {
        friend ostream& operator<<(ostream& _cout, const plq::string& s);
        friend istream& operator>>(istream& _cin, plq::string& s);
    public:
        typedef char* iterator;
    public:
        string(const char* str = "")
        {
            _size = strlen(str);
            _capacity = _size;
            _str = new char[_capacity+1];
            strcpy(_str, str);
        }
        string(const string& s)
            :_str(nullptr)
            , _size(0)
            , _capacity(0)
        {
            string tmp(s._str);
            swap(tmp);
        }
        string& operator=(const string& s)
        {
            if (this != &s)
            {
                string tmp(s._str);
                swap(tmp);
            }
            return *this;
        }
        ~string()
        {
            delete[] _str;
            _str = nullptr;
            _size = _capacity = 0;
        }
            //////////////////////////////////////////////////////////////
            // iterator
        iterator begin()
        {
            return _str;
        }
        iterator end()
        {
            return _str + _size;
        }
            /////////////////////////////////////////////////////////////
            // modify
        void push_back(char c)
        {
            if (_size == _capacity)
            {
                reserve(_capacity==0?4:_capacity*2);
            }
            _str[_size] = c;
            _size++;
            _str[_size] = '\0';
        }
        string& operator+=(char c)
        {
            insert(_size, c);
        }
        void append(const char* str)
        {
            insert(_size, str);
        }
        string& operator+=(const char* str)
        {
            insert(_size, str);
        }
        void clear()
        {
            _size = 0;
        }
        void swap(string& s)
        {
            ::swap(_str, s._str);
            ::swap(_size, s._size);
            ::swap(_capacity, s._capacity);
        }
        const char* c_str()const
        {
            return _str;
        }
        /////////////////////////////////////////////////////////////
        // capacity
        size_t size()const
        {
            return _size;
        }
        size_t capacity()const
        {
            return _capacity;
        }
        bool empty()const
        {
            if (_size == 0)
                return true;
            else
                return false;
        }
        //void resize(size_t n, char c = '\0')
        void reserve(size_t n)
        {
            if (_capacity < n)
            {
                char* tmp = new char[n + 1];
                strcpy(tmp, _str);
                delete[] _str;
                _capacity = n;
                _str = tmp;
            }
        }
        /////////////////////////////////////////////////////////////
        // access
        char& operator[](size_t index)
        {
            assert(index >= 0);
            assert(index <= _size);
            return _str[index];
        }
        const char& operator[](size_t index)const
        {
            assert(index >= 0);
            assert(index <= _size);
            return _str[index];
        }
        /////////////////////////////////////////////////////////////
        //relational operators
        bool operator<(const string& s)
        {
            size_t i = 0;
            while (i<=_size)
            {
                if (_str[i] == s._str[i])
                {
                    i++;
                    continue;
                }
                if (_str[i] > s._str[i])
                    return false;
                if (_str[i] < s._str[i])
                    return true;
            }
            return false;
        }
        bool operator<=(const string& s)
        {
            size_t i = 0;
            while (1)
            {
                if (_str[i] == s._str[i])
                {
                    i++;
                    continue;
                }
                if (_str[i] > s._str[i])
                    return false;
                if (_str[i] < s._str[i])
                    return true;
            }
        }
        bool operator>(const string& s)
        {
            size_t i = 0;
            while (i<=_size)
            {
                if (_str[i] == s._str[i])
                {
                    i++;
                    continue;
                }
                if (_str[i] < s._str[i])
                    return false;
                if (_str[i] > s._str[i])
                    return true;
            }
            return false;
        }
        bool operator>=(const string& s)
        {
            size_t i = 0;
            while (1)
            {
                if (_str[i] == s._str[i])
                {
                    i++;
                    continue;
                }
                if (_str[i] < s._str[i])
                    return false;
                if (_str[i] > s._str[i])
                    return true;
            }
        }
        bool operator==(const string& s)
        {
            size_t i = 0;
            while (i <= _size)
            {
                if (_str[i] != s._str[i])
                {
                    return false;
                }
                i++;
            }
            return true;
        }
        bool operator!=(const string& s)
        {
            size_t i = 0;
            while (i <= _size)
            {
                if (_str[i] != s._str[i])
                {
                    return true;
                }
                i++;
            }
            return false;
        }

        // 返回c在string中第一次出现的位置

        size_t find(char c, size_t pos = 0) const
        {
            for (pos; pos <= _size; pos++)
            {
                if (_str[pos] == c)
                    return pos;
            }
        }
        // 返回子串s在string中第一次出现的位置

        size_t find(const char* s, size_t pos = 0) const;

        // 在pos位置上插入字符c/字符串str，并返回该字符的位置

        string& insert(size_t pos, char c)
        {
            assert(pos <= _size);
            if (_size == _capacity)
            {
                reserve(_capacity == 0 ? 4 : _capacity * 2);
            }
            size_t end = _size+1;
            for (end; end >pos; end--)
            {
                _str[end] = _str[end + 1];
            }
            _str[pos] = c;
            ++_size;
            return *this;
        }

        string& insert(size_t pos, const char* str)
        {
            assert(pos <= _size);
            int len = strlen(str);
            if (_size == _capacity)
            {
                reserve(_capacity == 0 ? 4 : _capacity * 2+len);
            }
            size_t end = _size + len;
            for (end; end > pos; end--)
            {
                _str[end] = _str[end -len];
            }
            strncpy(_str + pos, str, len);
            _size += len;
            return *this;
        }
        // 删除pos位置上的元素，并返回该元素的下一个位置

        string& erase(size_t pos, size_t len);

    private:

        char* _str;

        size_t _capacity;

        size_t _size;

    };

}