#pragma once

class Cylinder{
    private:
        double base_radius{1.0};
        double height{1.0};
    public:
        Cylinder();
        Cylinder(double radius_param, double height_param);
        double volume();
        void set_base_radius(double radius_param);
        void set_base_height(double height_param);
        double get_base_radius();
        double get_base_height();
};
