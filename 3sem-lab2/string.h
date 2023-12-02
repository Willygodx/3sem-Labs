#ifndef STRING_H
#define STRING_H

class String {
private:
    char* data;
    int length;
public:
    String();
    String(const char* str);
    String(const String& other);
    const char* c_str() const;
    String& operator =(const String& other);
    friend String operator +(const String& first, const String& second);
    friend String& operator +=(String& first, const String& second);
    friend bool operator ==(const String& first, const String& second);
    friend bool operator !=(const String& first, const String& second);
    char operator [](int index) const;
    String operator ()(int first, int second) const;
    ~String();

};

#endif // STRING_H
