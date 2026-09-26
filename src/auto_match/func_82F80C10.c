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
extern unsigned int *auStack_4c;
extern int fn_82F69590();
extern int fn_82F69650();
extern int fn_82F6FA38();
extern int fn_82F80AC8();
extern int fn_82F812C0();
extern unsigned int uStack_50;


void fn_82F80C10(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uStack_50;
  uint auStack_4c [19];
  
  if (*param_1 != -0x7ffffffd) {
    iVar1 = fn_82F6FA38();
    if ((((*(int *)(iVar1 + 0x74) == 0) ||
         (iVar1 = fn_82F6FA38(), *(int *)(iVar1 + 0x74) == 0)) || (*param_1 == -0x1fbcb0b3))
       || ((*param_1 == -0x1fbcbcae ||
           (iVar1 = fn_82F69590(param_1,param_2,param_3,param_4,param_5,param_7,param_8),
           iVar1 == 0)))) {
      if (*(int *)(param_5 + 0xc) == 0) {
        fn_82F812C0();
      }
      iVar1 = fn_82F69650(param_2,param_5,param_6,&uStack_50,auStack_4c,param_4);
      if (uStack_50 < auStack_4c[0]) {
        piVar3 = (int *)(iVar1 + 0xc);
        do {
          if ((piVar3[-3] <= (int)param_6) && ((int)param_6 <= piVar3[-2])) {
            iVar2 = piVar3[1] + *piVar3 * 0x10;
            iVar1 = *(int *)(iVar2 + -0xc);
            if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
              fn_82F80AC8(param_1,param_2,param_3,param_4,param_5,iVar2 + -0x10,0,piVar3 + -3);
            }
          }
          uStack_50 = uStack_50 + 1;
          piVar3 = piVar3 + 5;
        } while (uStack_50 < auStack_4c[0]);
      }
    }
  }
  return;
}

