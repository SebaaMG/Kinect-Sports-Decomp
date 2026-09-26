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
extern int fn_828F5390();
extern int fn_828F5690();


undefined8 fn_828F5778(int param_1,byte *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  iVar4 = fn_828F5690();
  if (iVar4 == 0) {
    iVar4 = fn_828F5390(param_1,param_2);
    for (puVar1 = *(undefined4 **)((iVar4 + 0x1e) * 4 + param_1); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[3]) {
      pbVar5 = (byte *)*puVar1;
      pbVar6 = param_2;
      do {
        uVar3 = (uint)*pbVar5;
        uVar2 = (uint)*pbVar6;
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (uVar2 == uVar3);
      if ((int)(uVar2 - uVar3) < 0) {
        return 0;
      }
      if (uVar2 == uVar3) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = puVar1[1];
        }
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = puVar1[2];
        }
        return 1;
      }
    }
  }
  return 0;
}

