#pragma once 

#include <string>

class curl_tool{
    public:
        static curl_tool &instance();

        size_t get_file_size(const std::string);
    private:
        bool m_is_inited{false};

        curl_tool();
        ~curl_tool();

        curl_tool(const curl_tool&) = delete;
        curl_tool &operator=(const curl_tool&) = delete;

};
