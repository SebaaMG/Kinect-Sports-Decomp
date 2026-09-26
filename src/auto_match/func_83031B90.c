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
extern int fn_82F69148();
extern int fn_830358C8();


undefined8 fn_83031B90(int *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  uint *puVar5;
  undefined4 *puVar6;
  ulonglong uVar4;
  
  puVar1 = (undefined4 *)param_1[0x2b];
  for (puVar6 = (undefined4 *)param_1[0x2a]; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    fn_830358C8(*puVar6,param_2);
  }
  for (puVar5 = (uint *)param_1[0x1f];
      (puVar5 != (uint *)param_1[0x20] && ((ulonglong)*puVar5 != (param_2 & 0xffffffff)));
      puVar5 = puVar5 + 2) {
  }
  puVar6 = (undefined4 *)(-(uint)((uint *)param_1[0x20] != puVar5) & (uint)(puVar5 + 1));
  if (puVar6 != (undefined4 *)0x0) {
    piVar2 = (int *)*puVar6;
    (**(code **)(*piVar2 + 0x2c))(piVar2,0);
    uVar4 = (ulonglong)(uint)param_1[0x20];
    uVar3 = (ulonglong)(uint)param_1[0x1f];
    if (uVar3 != uVar4) {
      do {
        if ((ulonglong)*(uint *)uVar3 == (param_2 & 0xffffffff)) break;
        uVar3 = uVar3 + 8;
      } while ((uVar3 & 0xffffffff) != uVar4);
      if ((uVar3 & 0xffffffff) != uVar4) {
        if ((uVar3 & 0xffffffff) < (uVar4 - 8 & 0xffffffff)) {
          fn_82F69148(uVar3,uVar3 + 8,
                       (((((uVar4 - 8) - uVar3) - 1 & 0xffffffff) >> 3) + 1) * 8 & 0xfffffff8);
        }
        param_1[0x20] = param_1[0x20] + -8;
      }
    }
    (**(code **)(*param_1 + 8))(param_1);
  }
  return 1;
}

