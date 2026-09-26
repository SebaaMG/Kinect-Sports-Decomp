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
extern int fn_82AC39C0();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


uint fn_82AC3AA0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  iVar4 = param_2 * 0xc + param_1;
  uVar2 = *(uint *)(param_2 * 0xc + param_1);
  if (((((uVar2 & 0x40000) == 0) && ((uVar2 & 0x800) == 0)) &&
      ((uVar2 >> 0xc & 0x3f) <= *(uint *)(param_4 + 0x20))) &&
     ((uVar2 >> 5 & 0x3f) <= *(uint *)(param_4 + 0x20))) {
    uVar1 = *(uint *)(iVar4 + 4);
    uStack_30 = uVar1 & 7;
    uStack_2c = uVar1 >> 3 & 7;
    uStack_28 = uVar1 >> 6 & 7;
    uStack_24 = uVar1 >> 9 & 7;
    if ((((uVar2 & 0x80000) != 0) && (uVar1 = *(uint *)(iVar4 + 4), (uVar1 & 0x4000) == 0)) &&
       ((uVar1 & 0xc00000) == 0)) {
      iVar4 = 0;
      puVar3 = &uStack_30;
      do {
        if (*puVar3 == 6) {
          return 0x80004005;
        }
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 < 4);
      if (((uVar2 & 0x6000000) != 0x6000000) && (((uVar1 & 0x40000000) == 0 || (param_3 != 0)))) {
        uVar2 = fn_82AC39C0(param_1,param_2,param_4);
        return (int)uVar2 >> 0x1f & uVar2;
      }
    }
  }
  return 0x80004005;
}

