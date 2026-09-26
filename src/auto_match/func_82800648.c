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
extern unsigned int *auStack_3c;
extern int fn_82817B08();
extern int fn_82817B50();
extern int fn_82817BC8();
extern int fn_82817C98();
extern unsigned int uStack_40;


undefined8
fn_82800648(int *param_1,int param_2,ulonglong param_3,undefined4 *param_4,undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uStack_40;
  undefined4 auStack_3c [15];
  
  iVar1 = (param_2 + 0xe) * 4;
  uVar2 = fn_82817B08(*(undefined4 *)(*param_1 + iVar1));
  if (((uVar2 & 0xffffffff) == 0) || ((uVar2 & 0xffffffff) <= (param_3 & 0xffffffff))) {
    uVar3 = 0;
  }
  else {
    uStack_40 = 0;
    fn_82817B50(*(undefined4 *)(*param_1 + iVar1),param_3,&uStack_40);
    fn_82817BC8(uStack_40,auStack_3c);
    *param_4 = auStack_3c[0];
    fn_82817C98(uStack_40,param_5);
    uVar3 = 1;
  }
  return uVar3;
}

