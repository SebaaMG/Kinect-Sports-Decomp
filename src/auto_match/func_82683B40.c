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
extern int fn_826828D8();
extern int fn_82682A48();
extern int fn_82683990();
extern unsigned int iStack_48;
extern unsigned int lbl_8200579C;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;


void fn_82683B40(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined **ppuStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    piVar1 = *(int **)(param_2 + 8);
    if ((piVar1 != (int *)0x0) && (cVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1), cVar2 != '\0')) {
      iStack_48 = piVar1[10];
      uStack_30 = *(undefined4 *)(param_2 + 0x20);
      uStack_34 = *(undefined4 *)(param_2 + 0x1c);
      uStack_38 = *(undefined4 *)(param_2 + 0x18);
      uStack_4c = *(undefined4 *)(param_2 + 4);
      ppuStack_50 = &lbl_8200579C;
      uStack_3c = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      fn_82683990(param_1,&ppuStack_50);
      fn_82682A48(piVar1 + -4);
      fn_826828D8(&ppuStack_50);
      return;
    }
    fn_82683990(param_1,param_2);
  }
  return;
}

