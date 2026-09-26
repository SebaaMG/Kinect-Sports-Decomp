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
extern int fn_82381BC0();
extern int fn_8288B760();


undefined8 fn_823B6A78(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar5;
  int *piVar3;
  int iVar4;
  undefined8 uVar6;
  undefined4 *apuStack_30 [12];
  
  uVar6 = 1;
  if ((param_1[3] == 0) || (cVar5 = fn_8288B760((ulonglong)(uint)param_1[3] - 0x68), cVar5 == '\0')
     ) {
LAB_823b6b20:
    uVar6 = 0;
  }
  else {
    puVar1 = *(undefined4 **)(*param_1 + 0x200);
    apuStack_30[0] = (undefined4 *)*puVar1;
    while (puVar2 = apuStack_30[0], apuStack_30[0] != puVar1) {
      piVar3 = (int *)(param_1[3] + -0x68);
      if (param_1[3] == 0) {
        piVar3 = (int *)0x0;
      }
      iVar4 = (**(code **)(*piVar3 + 8))();
      cVar5 = (**(code **)(*(int *)(iVar4 + 0x144) + 0x38))((int *)(iVar4 + 0x144),puVar2[4]);
      if (cVar5 == '\0') goto LAB_823b6b20;
      fn_82381BC0(apuStack_30);
      puVar1 = *(undefined4 **)(*param_1 + 0x200);
    }
  }
  return uVar6;
}

