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
extern unsigned int *auStack_48;
extern int fn_822315A0();
extern int fn_827D5070();
extern int fn_827D6EF0();
extern int fn_827D9698();
extern int fn_827DCBF8();
extern int fn_827E0008();
extern int fn_827E2500();
extern int fn_827E2598();
extern int fn_827E2600();
extern int fn_827E2670();
extern int fn_827E26D0();
extern int fn_827E2790();
extern unsigned int iStack_44;


undefined8 fn_827E00E8(int param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  int iVar1;
  ushort uVar4;
  char cVar5;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 uVar6;
  int aiStack_50 [2];
  undefined1 auStack_48 [4];
  int iStack_44;
  
  RtlEnterCriticalSection(param_1 + 400);
  uVar4 = fn_827E0008(param_1,param_2,aiStack_50);
  if (param_3 != (uint *)0x0) {
    *param_3 = (uint)uVar4;
  }
  if (aiStack_50[0] == 0) {
    uVar6 = 2;
  }
  else if (uVar4 == 0xffff) {
    uVar6 = 6;
  }
  else {
    if (uVar4 == 0) {
      cVar5 = fn_827E2600(aiStack_50[0]);
      if (cVar5 != '\0') {
        cVar5 = fn_827E2670(aiStack_50[0]);
        if (cVar5 == '\0') {
          fn_827E2598(aiStack_50[0]);
          fn_827D9698();
          piVar2 = (int *)fn_827D6EF0(param_4,aiStack_50);
          puVar3 = (undefined4 *)fn_827E2790(auStack_48,aiStack_50[0]);
          iVar1 = *piVar2;
          uVar6 = fn_827D5070(*puVar3);
          (**(code **)(iVar1 + 0x10))(piVar2,uVar6);
          if (iStack_44 != 0) {
            fn_822315A0();
          }
          fn_827E26D0(aiStack_50[0]);
          fn_827E2500(aiStack_50[0]);
          *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + -1;
        }
        else {
          fn_827DCBF8(param_1 + 0x168,aiStack_50);
        }
      }
    }
    uVar6 = 0;
  }
  RtlLeaveCriticalSection(param_1 + 400);
  return uVar6;
}

