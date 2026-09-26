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
extern unsigned int *auStack_60;
extern int fn_826A8E58();
extern int fn_826D9590();
extern int fn_826DA0A0();
extern int fn_826DF0B0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5c;


void fn_826DF3D0(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  uint *apuStack_58 [2];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [72];
  
  iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x20) + 0x90);
  sync(1);
  if (iVar3 != 0) {
    uStack_5c = 0;
    do {
      lVar4 = (ulonglong)*(uint *)(param_1 + 0x1c) + 0x54;
      RtlEnterCriticalSection(lVar4);
      if (*(uint *)(*(int *)(param_1 + 0x1c) + 0x4c) <= *(uint *)(iVar3 + 0x14)) {
        RtlLeaveCriticalSection(lVar4);
        break;
      }
      iVar1 = *(int *)(*(uint *)(iVar3 + 0x14) * 4 + *(int *)(*(int *)(param_1 + 0x1c) + 0x48));
      RtlLeaveCriticalSection(lVar4);
      puVar5 = (uint *)(iVar3 + 0xc);
      uStack_50 = 0;
      uStack_4c = 0;
      apuStack_58[0] = puVar5;
      fn_826D9590(auStack_48,&uStack_5c,apuStack_58);
      cVar2 = fn_826A8E58(auStack_48,&uStack_50);
      if (cVar2 != '\0') {
        if (iVar1 != 0) {
          (**(code **)(*param_2 + 4))(param_2,param_1,iVar1,((ulonglong)*puVar5 & 0xfffffffc) + 8);
        }
        auStack_60[0] = 1;
        fn_826DF0B0(&uStack_5c,puVar5,auStack_60);
      }
      iVar3 = *(int *)(iVar3 + 0x18);
      sync(1);
    } while (iVar3 != 0);
    fn_826DA0A0(&uStack_5c);
  }
  return;
}

