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
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_8267B8F0();
extern int fn_826EA070();
extern int fn_826EA0C0();
extern int fn_826EA5C8();
extern int fn_826EA6A0();
extern int fn_827BDB08();
extern unsigned int lbl_8200D84C;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


undefined4 * fn_826EA6F8(undefined4 *param_1)

{
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar1;
  undefined4 *puVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  *param_1 = &lbl_8200D84C;
  uVar2 = fn_8267B8F0(lbl_831E7E64,0x540,0x20,0);
  param_1[0xc1] = uVar2;
  *(undefined1 *)((int)param_1 + 0x309) = 0;
  puVar4 = param_1 + 0x6e;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uVar2 = fn_827BDB08(puVar4);
  param_1[0x6e] = fn_826EA5C8;
  param_1[2] = uVar2;
  iVar3 = fn_826EA070(param_1 + 2,puVar4);
  if (iVar3 != 0) {
    uVar1 = fn_8267B890(lbl_831E7E64,0x824,0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_826EA6A0(uVar1,auStack_60);
    }
    param_1[8] = uVar2;
    fn_826EA0C0(param_1 + 2,puVar4,0);
  }
  return param_1;
}

