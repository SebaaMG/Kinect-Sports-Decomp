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
extern int fn_829E0C20();
extern int fn_829E0D20();
extern int fn_829E0E48();
extern int fn_829E1340();
extern int fn_82A1DDC0();


uint fn_829E13E0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  short *psVar3;
  
  if (((param_3 & 0xffff) != 0) &&
     (puVar1 = (uint *)fn_829E0C20(param_2,param_3), puVar1 != (uint *)0x0)) {
    fn_82A1DDC0(param_1 + 0xd4c0,puVar1 + 2,4);
    psVar3 = (short *)((*puVar1 >> 0xe) + (int)puVar1);
    if (*psVar3 != 0) {
      uVar2 = fn_829E0E48(param_1,param_2);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (psVar3[1] != 0) {
        uVar2 = fn_829E1340(param_1 + 0x70,param_2);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        if (psVar3[2] != 0) {
          uVar2 = fn_829E0D20(param_1 + 0x3820,param_2);
          return (int)uVar2 >> 0x1f & uVar2;
        }
      }
    }
  }
  return 0x80004005;
}

