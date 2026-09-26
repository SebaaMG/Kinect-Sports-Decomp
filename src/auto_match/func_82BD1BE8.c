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
extern int fn_82BD1AA8();


void fn_82BD1BE8(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar1 = param_1[2];
  uVar5 = (ulonglong)(uint)param_1[1];
  if ((int)param_1[1] <= iVar1) {
    puVar4 = (uint *)fn_82BD1AA8(*param_1,uVar5 * 0xc + param_2,param_2);
    uVar2 = puVar4[1];
    uVar3 = *puVar4;
    if ((int)(uVar2 - uVar3) <= iVar1 - (int)uVar5) {
      do {
        *param_1 = puVar4;
        uVar6 = ((ulonglong)uVar2 - (ulonglong)uVar3) + uVar5 + 1;
        uVar5 = uVar6 & 0xffffffff;
        iVar7 = (int)uVar6;
        param_1[1] = iVar7;
        if (iVar7 <= iVar1) {
          puVar4 = (uint *)fn_82BD1AA8(puVar4,uVar5 * 0xc + param_2);
        }
        uVar2 = puVar4[1];
        uVar3 = *puVar4;
      } while ((int)(uVar2 - uVar3) <= (int)(param_1[2] - param_1[1]));
    }
  }
  return;
}

