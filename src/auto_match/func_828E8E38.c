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
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_828E61D0();
extern int fn_828E8728();
extern int fn_828E8A40();
extern unsigned int iStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


int fn_828E8E38(int param_1,uint *param_2)

{
  bool bVar1;
  uint uVar3;
  undefined8 uVar2;
  uint auStack_40 [4];
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar3 = fn_828E61D0();
  if (uVar3 != *(uint *)(param_1 + 4)) {
    if ((*param_2 < *(uint *)(uVar3 + 0xc)) ||
       ((*param_2 <= *(uint *)(uVar3 + 0xc) && (param_2[1] < *(uint *)(uVar3 + 0x10))))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) goto LAB_828e8eec;
  }
  uStack_30 = *param_2;
  uStack_2c = param_2[1];
  iStack_24 = 0;
  uStack_28 = 0;
  uVar2 = fn_828E8A40(param_1,&uStack_30);
  fn_828E8728(auStack_40,param_1,uVar3,uVar2);
  uVar3 = auStack_40[0];
  if (iStack_24 != 0) {
    fn_822315A0();
  }
LAB_828e8eec:
  return uVar3 + 0x14;
}

