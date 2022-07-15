#include <list>
#include <memory>
#include <functional>
#include <stdexcept>
#include <algorithm>

class SnakeSegments{
private:
    struct Segment
    {
        int x;
        int y;
    };
    std::list<Segment> m_segments;

public:
    void addSegment(const int& x, const int& y);

    bool isSegmentAtPosition(int x, int y) const;
    
};