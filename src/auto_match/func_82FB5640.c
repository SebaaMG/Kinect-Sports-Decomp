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
extern int fn_82FA5060();
extern int fn_82FB40B0();
extern int fn_82FB4990();
extern int fn_82FB6240();
extern unsigned int lbl_831BC768;


undefined8 fn_82FB5640(int param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = fn_82FA5060(lbl_831BC768,0x54);
  if (((uVar1 & 0xffffffff) != 0) &&
     (iVar2 = fn_82FB40B0(uVar1,0,param_1,param_2,0), iVar2 != 0)) {
    piVar3 = (int *)fn_82FB6240((undefined4 *)(param_1 + 0x54));
    if (piVar3 != (int *)0x0) {
      *piVar3 = iVar2;
      *(undefined4 *)(iVar2 + 0x48) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
      return 1;
    }
    fn_82FB4990(iVar2);
  }
  return 2;
}

