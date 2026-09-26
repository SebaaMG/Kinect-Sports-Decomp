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
extern int fn_8268AF70();
extern int fn_82693D88();
extern int fn_82693E40();
extern int fn_82693E90();
extern int fn_82693FE8();
extern int fn_82694448();
extern int fn_82F68CC0();
extern unsigned int uStack_54;


int * fn_82694700(int param_1,char *param_2)

{
  uint uVar1;
  char cVar4;
  uint *puVar2;
  uint uVar3;
  char *pcVar5;
  uint *apuStack_60 [2];
  char *pcStack_58;
  uint uStack_54;
  char *pcStack_50;
  
  pcVar5 = param_2;
  if (param_2 == (char *)0x0) {
    return *(int **)(param_1 + 0x18);
  }
  do {
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar4 != '\0');
  pcVar5 = pcVar5 + (-1 - (int)param_2);
  pcStack_58 = param_2;
  uVar1 = fn_8268AF70(param_2,pcVar5,0x1505);
  uStack_54 = uVar1 & 0xffffff;
  pcStack_50 = pcVar5;
  cVar4 = fn_82694448(param_1,&pcStack_58,apuStack_60);
  if (cVar4 == '\0') {
    puVar2 = (uint *)fn_82693E40(param_1);
    if (puVar2 != (uint *)0x0) {
      apuStack_60[0] = puVar2;
      uVar3 = fn_82693D88(param_1,pcVar5);
      if (uVar3 != 0) {
        fn_82F68CC0(uVar3,param_2,pcVar5);
        pcVar5[uVar3] = '\0';
      }
      *puVar2 = uVar3;
      if (uVar3 != 0) {
        puVar2[2] = 0;
        puVar2[4] = (uint)pcVar5;
        puVar2[3] = uVar1 & 0xffffff;
        puVar2[1] = 0;
        fn_82693FE8(param_1,param_1,apuStack_60,puVar2[3]);
        return (int *)puVar2;
      }
      fn_82693E90(param_1,puVar2);
    }
    apuStack_60[0] = *(uint **)(param_1 + 0x18);
  }
  return (int *)apuStack_60[0];
}

