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
extern int fn_82F71A70();
extern int fn_82F71CD0();
extern int fn_82F85EF8();
extern unsigned int lbl_8329F620;
extern unsigned int uStack00000014;


undefined8 fn_82F85E30(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uStack00000014;
  
  puVar1 = &lbl_8329F620;
  iVar2 = (&lbl_8329F620)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x48;
  uStack00000014 = param_1;
  if (*(int *)(iVar2 + 8) == 0) {
    fn_82F71CD0(10);
    puVar1 = *(undefined4 **)(iVar2 + 8);
    if (puVar1 == (undefined4 *)0x0) {
      fn_82F71A70(iVar2 + 0xc,4000);
      puVar1 = (undefined4 *)(*(int *)(iVar2 + 8) + 1);
      *(undefined4 **)(iVar2 + 8) = puVar1;
    }
    param_1 = fn_82F85EF8();
  }
  RtlEnterCriticalSection(puVar1[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x48 + 0xc);
  return 1;
}

