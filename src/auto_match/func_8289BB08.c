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
extern int fn_825089A0();
extern U64 storeWordConditionalIndexed();


void fn_8289BB08(undefined8 param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte in_cr0;
  
  cVar1 = *(char *)((int)param_2 + 0x1d);
  do {
    if (cVar1 != '\0') {
      return;
    }
    fn_8289BB08(param_1,param_2[2]);
    piVar3 = (int *)*param_2;
    if ((ulonglong)(uint)param_2[6] != 0) {
      lVar6 = (ulonglong)(uint)param_2[6] + 0xc;
LAB_8289bb58:
      do {
        puVar7 = (uint *)lVar6;
        uVar2 = *puVar7;
        if (uVar2 == 0) {
          if (in_RESERVE != '\0') {
            uVar4 = storeWordConditionalIndexed(1,0,lVar6);
            *puVar7 = uVar4;
            in_cr0 = 2;
          }
          if (!(bool)(in_cr0 >> 1 & 1)) goto LAB_8289bb58;
        }
        else if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed((ulonglong)uVar2,0,lVar6);
          *puVar7 = uVar4;
          in_cr0 = 2;
        }
      } while (uVar2 != 0);
      sync(1);
      *(int *)(param_2[4] + 4) = param_2[5];
      *(int *)param_2[5] = param_2[4];
      sync(1);
      *puVar7 = 0;
    }
    piVar5 = (int *)fn_825089A0();
    (**(code **)(*piVar5 + 0x28))(piVar5,param_2);
    cVar1 = *(char *)((int)piVar3 + 0x1d);
    param_2 = piVar3;
  } while( true );
}

