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
extern int fn_82AC5088();


uint fn_82AC50E0(ushort *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  for (; param_4 != (undefined4 *)0x0; param_4 = (undefined4 *)param_4[1]) {
    if ((ushort *)*param_4 == param_1) {
      return 0x80004005;
    }
  }
  if ((*param_1 < 6) && (param_1[1] < 0x13)) {
    uVar2 = *(uint *)(param_1 + 6);
    uVar1 = param_1[5];
    if ((uVar2 <= param_3) && ((uint)uVar1 * 8 + uVar2 <= param_3)) {
      puVar4 = (undefined4 *)(uVar2 + param_2);
      iVar3 = 0;
      if (uVar1 != 0) {
        do {
          uVar2 = fn_82AC5088(param_2,*puVar4,param_3,0xf0);
          if (-1 < (int)uVar2) {
            uVar2 = puVar4[1];
            if (param_3 < uVar2) {
              return 0x80004005;
            }
            if (param_3 < uVar2 + 0x10) {
              return 0x80004005;
            }
            uVar2 = ((int (*)())fn_82AC50E0)(uVar2 + param_2,param_2);
            uVar2 = (int)uVar2 >> 0x1f & uVar2;
          }
          if ((int)uVar2 < 0) {
            return uVar2;
          }
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 2;
        } while (iVar3 < (int)(uint)uVar1);
      }
      return 0;
    }
  }
  return 0x80004005;
}

