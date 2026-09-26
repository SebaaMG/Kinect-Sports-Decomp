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
extern unsigned int *auStack_30;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_826B0AD8();


void fn_826C2778(int param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar4;
  int iVar3;
  undefined1 auStack_30 [48];
  
  if ((*(int *)(param_1 + 0x1c) == 0) && (param_4 == 0)) {
    puVar2 = (undefined4 *)fn_8267B890(*(undefined4 *)(*param_2 + 0x288),0xc,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      fn_826B0AD8(puVar2,param_3);
    }
    *(undefined4 **)(param_1 + 0x1c) = puVar2;
  }
  else {
    auStack_30[0] = 0;
    cVar4 = (**(code **)(*(int *)(param_4 + 0x10) + 0x2c))
                      (param_4 + 0x10,param_2,(ulonglong)*param_2 + 0x130,auStack_30);
    if (cVar4 != '\0') {
      iVar3 = fn_82696958(auStack_30,0);
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1U & 0x8fffffff;
      }
      iVar1 = **(int **)(param_1 + 0x1c);
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1U & 0x8fffffff;
      }
      if (*(int *)(param_3 * 4 + iVar1) != 0) {
        fn_826824B0();
      }
      *(int *)(param_3 * 4 + iVar1) = iVar3;
      if (iVar3 != 0) {
        fn_826824B0(iVar3);
      }
    }
    fn_82696330(auStack_30);
  }
  return;
}

