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
extern unsigned int *auStack_120;
extern int fn_829D36C8();
extern int fn_829E7640();
extern int fn_829E77C0();
extern int fn_829E7918();
extern int fn_82A28568();
extern int fn_82F664B0();
extern int fn_82F69A80();
extern unsigned int lbl_832179FC;


uint fn_829E63A8(int *param_1)

{
  int iVar2;
  undefined8 uVar1;
  uint uVar3;
  undefined1 auStack_120 [272];
  
  fn_829E7640();
  iVar2 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,0x4c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_829E77C0();
  }
  *param_1 = iVar2;
  if (iVar2 == 0) {
    uVar3 = 0x8007000e;
  }
  else {
    uVar1 = fn_829D36C8();
    iVar2 = fn_82F664B0(auStack_120,0x104,uVar1);
    if ((iVar2 == 0) &&
       (iVar2 = fn_82F69A80(auStack_120,0x104,0xffffffff82079640), iVar2 == 0)) {
      iVar2 = fn_829E7918(*param_1,auStack_120);
      uVar3 = iVar2 >> 0x1f & 0x80004005;
    }
    else {
      uVar3 = 0x80004005;
    }
  }
  return uVar3;
}

