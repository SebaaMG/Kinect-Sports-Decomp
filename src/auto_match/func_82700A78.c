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
extern int fn_826A8E58();
extern int fn_826F7940();
extern int fn_826FDAB8();
extern int fn_827741E8();
extern int fn_8278C110();
extern unsigned int iStack_24;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82700A78(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  
  fn_8278C110(&piStack_28,param_1 + 0xa28);
  uStack_30 = 0;
  uStack_2c = 0;
  cVar3 = fn_826A8E58(&piStack_28,&uStack_30);
  if (cVar3 == '\0') {
    uStack_30 = 0;
    uStack_2c = 0;
    do {
      iVar2 = *(int *)(iStack_24 * 0xc + *piStack_28 + 0x10);
      while (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x18);
        fn_826F7940(iVar2,1);
        iVar2 = iVar1;
      }
      fn_827741E8(&piStack_28);
      cVar3 = fn_826A8E58(&piStack_28,&uStack_30);
    } while (cVar3 == '\0');
  }
  fn_826FDAB8(param_1 + 0xa28);
  return;
}

