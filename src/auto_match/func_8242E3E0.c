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
extern unsigned int *auStack_20;
extern int fn_825200A8();
extern int fn_8265BF48();
extern unsigned int lbl_83297700;
extern unsigned int lbl_83297B8C;


void fn_8242E3E0(int param_1)

{
  undefined4 auStack_20 [2];
  
  if ((lbl_83297B8C & 1) == 0) {
    lbl_83297B8C = lbl_83297B8C | 1;
    lbl_83297700 = fn_8265BF48(0xffffffff821b203c,0);
  }
  auStack_20[0] = **(undefined4 **)(*(int *)(param_1 + 0x174) + 0x9c);
  fn_825200A8(auStack_20,0xffffffff83297700);
  return;
}

