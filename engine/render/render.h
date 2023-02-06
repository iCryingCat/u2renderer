#ifndef _RENDER_H_
#define _RENDER_H_

#include <memory>

namespace u2
{
    class Render
    {
    public:
        static unsigned char* buff;

    public:
        Render() {}
        ~Render(){}

        void OnStart(void);
        void OnTick(void);
    };
}
#endif // !_RENDER_H_