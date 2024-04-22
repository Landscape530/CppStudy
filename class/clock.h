#ifndef T_H
#define T_H

extern int hl;
// int test();

class Myclock {
public:
    Myclock();
    Myclock( int hour, int minute, int second );
    ~Myclock();
    int v;
    static void start();

    [[nodiscard]] std::string current_time() const;
    void set_time( int hour, int minute, int second );
private:
    int hour;
    int minute;
    int second;
};

void t (int i);

#endif //T_H
