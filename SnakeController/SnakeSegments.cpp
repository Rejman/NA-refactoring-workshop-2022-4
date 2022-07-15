#include "SnakeSegments.hpp"

// public
void SnakeSegments::addSegment(const int& x, const int& y){
    Segment seq;
    seq.x = x;
    seq.y = y;
    m_segments.push_back(seq);
}

bool SnakeSegments::isSegmentAtPosition(int x, int y) const
{
    return m_segments.end() !=  std::find_if(m_segments.cbegin(), m_segments.cend(),
        [x, y](auto const& segment){ return segment.x == x and segment.y == y; });
}


