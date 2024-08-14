#include "gps_tools.hpp"

namespace Navigation{
    Latitude::Latitude(double aDegree): mPoint{aDegree,'N'}{
        checkAndCorrect();
    }
    Latitude::Latitude(const Latitude &other): mPoint{other.mPoint.degree, other.mPoint.ch}{}
    Latitude &Latitude::operator=(const Latitude &obj){
        if(this == &obj) return *this;
        mPoint.degree = obj.mPoint.degree;
        mPoint.ch     = obj.mPoint.ch;
        return *this;
    }

    bool Latitude::operator==(const Latitude &aRhs)const{
        return mPoint.degree == aRhs.mPoint.degree;
    }
    bool Latitude::operator!=(const Latitude &aRhs)const{
        return !(*this == aRhs);
    }

    void Latitude::checkAndCorrect(){
        if(!common::latitudeIsCorrect(mPoint.degree)){
            if(mPoint.degree >= 0.0) mPoint.degree = constants::LatitudeRightRange;
            else mPoint.degree = constants::LatitudeLeftRange;
        }
        mPoint.ch = (mPoint.degree >= 0.0) ? 'N' : 'S';
    }
    const degreeD &Latitude::point()const{
        return mPoint;
    }
    Longitude::Longitude(double aDegree): mPoint{aDegree,'E'} {
        checkAndCorrect();
    }
    Longitude::Longitude(const Longitude &other): mPoint{other.mPoint.degree, other.mPoint.ch}{}
    
    Longitude &Longitude::operator=(const Longitude &obj){
        if(this == &obj) return *this;
        mPoint.degree = obj.mPoint.degree;
        mPoint.ch     = obj.mPoint.ch;
        return *this;
    }
    
    bool Longitude::operator==(const Longitude &aRhs)const{
        return mPoint.degree == aRhs.mPoint.degree;
    }
    bool Longitude::operator!=(const Longitude &aRhs)const{
        return !(*this == aRhs);
    }

    const degreeD &Longitude::point()const{
        return mPoint;
    }
    void Longitude::checkAndCorrect(){
        if(!common::longitudeIsCorrect(mPoint.degree)){
            if(mPoint.degree >= 0.0) mPoint.degree = constants::LongitudeRightRange;
            else mPoint.degree = constants::LongitudeLeftRange;
        }
        mPoint.ch = (mPoint.degree >= 0.0) ? 'E' : 'W';
    }

    namespace common{
        bool latitudeIsCorrect (double aDegree){
            return (aDegree >= constants::LatitudeLeftRange) &&
                   (aDegree <= constants::LatitudeRightRange); 
        }
        bool longitudeIsCorrect (double aDegree){
            return (aDegree >= constants::LongitudeLeftRange) &&
                   (aDegree <= constants::LongitudeRightRange); 
        }  
    } 
}