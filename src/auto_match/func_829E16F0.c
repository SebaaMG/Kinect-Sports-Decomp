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
extern int fn_829E0980();
extern int fn_829E0C20();
extern int fn_829E0F70();
extern int fn_829E10F0();
extern int fn_829E1628();
extern int fn_82A1DDC0();


ulonglong fn_829E16F0(longlong param_1,undefined8 param_2,ushort *param_3)

{
  uint *puVar2;
  ulonglong uVar1;
  short *psVar3;
  
  puVar2 = (uint *)fn_829E0C20(param_2,*param_3);
  if (puVar2 != (uint *)0x0) {
    uVar1 = fn_829E0980(puVar2,0xc,3,1,param_2);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    *param_3 = (ushort)(puVar2[1] >> 0x11);
    fn_82A1DDC0(puVar2 + 2,param_1 + 0xd4c0,4);
    psVar3 = (short *)((*puVar2 >> 0xe) + (int)puVar2);
    uVar1 = fn_829E10F0(param_1,param_2,psVar3);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if (*psVar3 != 0) {
      uVar1 = fn_829E1628(param_1 + 0x70,param_2,psVar3 + 1);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if (psVar3[1] != 0) {
        uVar1 = fn_829E0F70(param_1 + 0x3820,param_2,psVar3 + 2);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        return -(ulonglong)(psVar3[2] == 0) & 0xffffffff80004005;
      }
    }
  }
  return 0xffffffff80004005;
}

