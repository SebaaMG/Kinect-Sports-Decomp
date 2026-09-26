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
extern int fn_82F63C78();
extern int fn_82F641F8();
extern int fn_82F64818();
extern int fn_82F664B0();
extern int fn_82F68BF0();
extern int fn_82F71CD0();
extern int fn_82F78020();
extern unsigned int iStack00000014;


undefined4 fn_82F646C8(int param_1,int param_2)

{
  char cVar1;
  char *pcVar3;
  undefined4 *puVar4;
  ulonglong uVar2;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iStack00000014;
  
  if (*(int *)(param_1 + 4) == 0) {
    iStack00000014 = param_1;
    pcVar3 = (char *)fn_82F78020(0,param_1 + 9,0,0xffffffff82f68bf0,0xffffffff82f641f8,0x2800);
    pcVar6 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      return 0;
    }
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + (-1 - (int)pcVar3);
    while ((pcVar6 != (char *)0x0 && (pcVar7 = pcVar6 + -1, pcVar3[(int)pcVar7] == ' '))) {
      pcVar3[(int)pcVar7] = '\0';
      pcVar6 = pcVar7;
    }
    fn_82F71CD0(0xe);
    if ((*(int *)(param_1 + 4) == 0) &&
       (puVar4 = (undefined4 *)fn_82F68BF0(8), puVar4 != (undefined4 *)0x0)) {
      uVar2 = fn_82F68BF0(pcVar6 + 1);
      *(int *)(param_1 + 4) = (int)uVar2;
      if ((uVar2 & 0xffffffff) == 0) {
        fn_82F641F8(puVar4);
      }
      else {
        iVar5 = fn_82F664B0(uVar2,pcVar6 + 1,pcVar3);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63C78(0,0,0,0,0);
        }
        *puVar4 = *(undefined4 *)(param_1 + 4);
        puVar4[1] = *(undefined4 *)(param_2 + 4);
        *(undefined4 **)(param_2 + 4) = puVar4;
      }
    }
    fn_82F641F8(pcVar3);
    fn_82F64818();
  }
  return *(undefined4 *)(param_1 + 4);
}

