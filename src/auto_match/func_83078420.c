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
extern int fn_8306D760();
extern int fn_8306D830();
extern int fn_83077208();
extern int fn_83077AA8();
extern unsigned int lbl_82002AE0;


void fn_83078420(undefined8 param_1,int param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = fn_8306D760(*(undefined4 *)(param_2 + 0x10));
  if (cVar2 == '\0') {
    bVar3 = true;
    *(undefined4 *)(param_2 + 0x84) = 0x1e;
    uVar1 = lbl_82002AE0;
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x8c) = uVar1;
    *(undefined4 *)(param_2 + 0x90) = uVar1;
    *(undefined4 *)(param_2 + 0x88) = uVar1;
  }
  else {
    cVar2 = fn_8306D830(*(undefined4 *)(param_2 + 0x10));
    if (cVar2 == '\0') {
      fn_83077AA8(param_1,param_2);
    }
    bVar3 = param_4 == '\0';
  }
  fn_83077208(param_2,bVar3);
  return;
}

