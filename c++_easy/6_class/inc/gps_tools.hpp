#pragma once
#ifndef GPS_TOOLS_H
#define GPS_TOOLS_H

namespace Navigation{
    namespace constants{
        constexpr double PI = 3.141592653589793;
        constexpr double PI_2 = PI / 2;
        constexpr double PI_4 = PI / 4;

        constexpr double LatitudeRightRange = 90.0;
        constexpr double LatitudeLeftRange  = -90.0;

        constexpr double LongitudeRightRange = 90.0;
        constexpr double LongitudeLeftRange  = -90.0;

        constexpr double DegreeToRadianCoof = PI / 180;
        constexpr double RadianToDegreeCoof = 180. / PI;

        constexpr double EarthRadiusM  = 6371001;
        constexpr double EarthRadiusKM = 6371.001;

        constexpr double RadiusAtEquatorM  = 6378137;
        constexpr double RadiusAtEquatorKM = 6378.137;

        constexpr double RadiusAtPoleM = 6356752;
        constexpr double RadiusAtPoleKM = 6356.752;
    }


    //40.123456
    struct degreeD{
        double degree;
        char ch;
    };
    //40° 26.767'
    struct degreeDM{
        double degree;
        double minutes;
        char ch;
    };
    //40° 26' 46"
    struct degreeDMS{
        double degree;
        double minutes;
        double seconds;
        char ch;
    };

    struct Latitude{
    public:
        Latitude(double aDegree);
        Latitude(const Latitude &other);
        Latitude &operator=(const Latitude&);

        Latitude &operator=(const Latitude&&) = delete;
        Latitude(const Latitude &&)           = delete;

        bool operator==(const Latitude&)const;
        bool operator!=(const Latitude&)const;
        
        const degreeD &point()const;

    private:
        void checkAndCorrect();
    private:    
        degreeD mPoint;
    };    
 
    struct Longitude{
    public:
        Longitude(double aDegree);
        Longitude(const Longitude &other);
        Longitude &operator=(const Longitude&);

        bool operator==(const Longitude&)const;
        bool operator!=(const Longitude&)const;

        Longitude &operator=(const Longitude&&) = delete;
        Longitude(const Longitude &&)           = delete;

        const degreeD &point()const;
        
    private:
        void checkAndCorrect();
    private:    
        degreeD mPoint;
    };
    namespace common{
        bool latitudeIsCorrect(double);
        bool longitudeIsCorrect(double);
    }
}


#endif /*GPS_TOOLS_H*/