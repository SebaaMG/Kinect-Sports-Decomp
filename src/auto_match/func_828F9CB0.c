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
extern int fn_828F9A60();
extern int fn_82F68CC0();


undefined8 fn_828F9CB0(int param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  
  if (param_2 != (uint *)0x0) {
    uVar2 = *(uint *)(param_1 + 0x14);
    if ((ulonglong)uVar2 == 0) {
      *param_2 = uVar2;
    }
    else {
      uVar4 = fn_828F9A60((ulonglong)uVar2 + 1,param_2);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      iVar5 = (**(code **)(*(int *)*param_2 + 0xc))();
      puVar7 = (undefined1 *)(iVar5 + *(int *)(param_1 + 0x14));
      *puVar7 = 0;
      for (puVar3 = *(undefined4 **)(param_1 + 0x10); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)*puVar3) {
        pcVar6 = (char *)(puVar3 + 1);
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        puVar7 = puVar7 + -(int)(pcVar6 + (-1 - (int)(puVar3 + 1)));
        fn_82F68CC0(puVar7);
      }
    }
  }
  return 0;
}

