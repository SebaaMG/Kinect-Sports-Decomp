typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_83022530();
extern int fn_83023180();


void fn_83022780(int *param_1,uint *param_2)

{
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  fn_83023180((double)(float)param_1[3],&fStack_50,param_2 + 4);
  fn_83022530((double)fStack_50,(double)fStack_4c,param_1,*param_2,*(undefined4 *)*param_1);
  fn_83022530((double)fStack_48,(double)fStack_44,param_1,
                    (ulonglong)*(ushort *)(param_2 + 3) * 4 + (ulonglong)*param_2,
                    (ulonglong)*(ushort *)((uint *)*param_1 + 3) * 4 + (ulonglong)*(uint *)*param_1)
  ;
  fn_83022530((double)fStack_40,(double)fStack_3c,param_1,
                    (ulonglong)*(ushort *)(param_2 + 3) * 8 + (ulonglong)*param_2,
                    (ulonglong)*(ushort *)((uint *)*param_1 + 3) * 8 + (ulonglong)*(uint *)*param_1)
  ;
  fn_83022530((double)fStack_38,(double)fStack_34,param_1,
                    (ulonglong)*(ushort *)(param_2 + 3) * 0x14 + (ulonglong)*param_2,
                    (ulonglong)*(ushort *)((uint *)*param_1 + 3) * 0x14 +
                    (ulonglong)*(uint *)*param_1);
  fn_83022530((double)fStack_30,(double)fStack_2c,param_1,
                    (ulonglong)*(ushort *)(param_2 + 3) * 0xc + (ulonglong)*param_2,
                    (ulonglong)*(ushort *)((uint *)*param_1 + 3) * 0xc +
                    (ulonglong)*(uint *)*param_1);
  fn_83022530((double)fStack_28,(double)fStack_24,param_1,
                    (ulonglong)*(ushort *)(param_2 + 3) * 0x10 + (ulonglong)*param_2,
                    (ulonglong)*(ushort *)((uint *)*param_1 + 3) * 0x10 +
                    (ulonglong)*(uint *)*param_1);
  return;
}

