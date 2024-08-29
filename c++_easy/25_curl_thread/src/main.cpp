#include <iostream>
#include <mutex>
#include <thread> 
#include "curl_downloader.hpp"


int main(int argc, char **argv){
    curl_downloader dwl;
    std::string url{"https://sample-videos.com/video321/mp4/720/big_buck_bunny_720p_1mb.mp4"};
    dwl.load(url);
    return 0;
}

