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
extern int fn_827EC970();
extern float lbl_821916FC;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


bool fn_8226A9D8(int param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(char *)(param_1 + 4) == '\0') {
    uStack_20 = *(undefined4 *)(param_1 + 0x38);
    uStack_1c = *(undefined4 *)(param_1 + 0x3c);
    uStack_18 = lbl_821CC160;
    iVar1 = fn_827EC970((double)(*(float *)(param_1 + 0x30) * lbl_821916FC),&uStack_20,param_2,
                         param_2,param_2 + 0x10);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

