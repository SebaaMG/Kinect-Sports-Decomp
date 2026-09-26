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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_827F1080();
extern int fn_82811438();
extern unsigned int lbl_821C4CB8;
extern unsigned int *lbl_832823E0;


void fn_82554630(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [64];
  
  uVar2 = 0;
  *param_1 = &lbl_821C4CB8;
  if (param_1[99] != 0) {
    iVar3 = 0;
    do {
      if (uVar2 != 0) {
        puVar1 = *(undefined4 **)(param_1[0x66] + iVar3 + -4);
        (**(code **)*puVar1)(puVar1,0);
      }
      (**(code **)**(undefined4 **)(param_1[100] + iVar3))(*(undefined4 **)(param_1[100] + iVar3),0)
      ;
      (**(code **)**(undefined4 **)(iVar3 + param_1[0x65]))
                (*(undefined4 **)(iVar3 + param_1[0x65]),0);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < (uint)param_1[99]);
  }
  auStack_50[0] = 3;
  fn_82811438(auStack_40,auStack_50,0x10);
  (**(code **)(*lbl_832823E0 + 0x18))(lbl_832823E0,param_1[0x65],auStack_40);
  fn_827F1080(param_1);
  return;
}

