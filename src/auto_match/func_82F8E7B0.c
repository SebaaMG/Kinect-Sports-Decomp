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
extern unsigned int *auStack_30;
extern int fn_82A1C098();
extern int fn_82A1E658();
extern int fn_82F90628();
extern int fn_82F90680();
extern unsigned int iStack00000014;


int fn_82F8E7B0(int param_1)

{
  int iVar1;
  int iStack00000014;
  undefined1 auStack_30 [32];
  
  iStack00000014 = param_1;
  fn_82F90628(auStack_30,param_1 + 0xc);
  if (*(int *)(iStack00000014 + 0x78) == 0x3e5) {
    fn_82F90680(auStack_30);
    iVar1 = 0x540002;
  }
  else {
    fn_82A1E658(*(undefined4 *)(iStack00000014 + 0x84));
    *(undefined4 *)(iStack00000014 + 0x84) = 0;
    fn_82A1E658(*(undefined4 *)(iStack00000014 + 0x94));
    *(undefined4 *)(iStack00000014 + 0x94) = 0;
    iVar1 = fn_82A1C098(iStack00000014 + 0x78);
    if (iVar1 < 0) {
      fn_82F90680(auStack_30);
    }
    else {
      *(undefined4 *)(iStack00000014 + 0x74) = *(undefined4 *)(iStack00000014 + 0x7c);
      fn_82F90680(auStack_30);
      iVar1 = 0;
    }
  }
  return iVar1;
}

