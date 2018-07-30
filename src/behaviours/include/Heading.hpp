#ifndef _CORE_HEADING_HPP
#define _CORE_HEADING_HPP

class Heading
{
private:
   double _heading;
public:
   Heading();
   Heading(double h);
   ~Heading();
   double GetHeadingRadians() const;

   Heading operator+(const Heading& h);
   Heading operator-(const Heading& h);
   bool operator==(const Heading& h);
};

#endif // _CORE_HEADING_HPP