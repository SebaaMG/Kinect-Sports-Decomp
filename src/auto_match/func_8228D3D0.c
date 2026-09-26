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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_826728E8();
extern int fn_82837D98();
extern unsigned int iStack_2c;
extern unsigned int iStack_34;


void fn_8228D3D0(undefined8 param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 auStack_40 [2];
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  piVar2 = (int *)fn_82279C58(auStack_38,param_1);
  if ((*piVar2 == 0) || (bVar1 = true, param_2 == 0)) {
    bVar1 = false;
  }
  if (iStack_34 != 0) {
    fn_822315A0();
  }
  if (bVar1) {
    fn_82837D98(*(undefined4 *)(param_2 + 0x14),0,auStack_40);
    puVar3 = (undefined4 *)fn_82279C58(auStack_30,param_1);
    fn_826728E8(*puVar3,0xffffffff821a84fc,auStack_40[0]);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  return;
}

