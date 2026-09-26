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
extern int fn_82791070();
extern unsigned int iStack_c;


undefined4 fn_827A2DE8(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int *piStack_10;
  int iStack_c;
  
  fn_82791070(&piStack_10,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 8) + 8),
                    *(undefined4 *)(param_1 + 0x30),0);
  if (((piStack_10 == (int *)0x0) || (iStack_c < 0)) || (bVar1 = false, piStack_10[1] <= iStack_c))
  {
    bVar1 = true;
  }
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iStack_c * 4 + *piStack_10);
  }
  return uVar2;
}

