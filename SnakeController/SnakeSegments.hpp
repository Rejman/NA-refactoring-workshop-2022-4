#include <list>
#include <memory>

class SnakeSegments{
private:
    struct Segment
    {
        int x;
        int y;
    };
    std::list<Segment> m_segments;

public:
    void addSegment(const int& x, const int& y){
        Segment seq;
        seq.x = x;
        seq.y = y;
        m_segments.push_back(seq);
    }

};