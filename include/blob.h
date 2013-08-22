#ifndef BLOB_H
#define BLOB_H

class blob
{
    private:
        float x;
        float y;
    public:
        blob();
        blob(float, float);
        virtual ~blob();
        float getX();
        float getY();
        void update(float, float);
    protected:
    private:
};

#endif // BLOB_H
