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
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82F64538();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


void fn_823BBC20(int *param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uStack_30;
  int iStack_2c;
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar1 = 0xffffffff831d7088;
    }
    else {
      uVar1 = (**(code **)(*(int *)*param_3 + 4))();
    }
    cVar2 = fn_82F64538(uVar1,0xffffffff831de9b0);
    if (cVar2 != '\0') {
      puVar3 = (undefined4 *)(*param_3 + 4);
      goto LAB_823bbc90;
    }
  }
  puVar3 = (undefined4 *)0x0;
LAB_823bbc90:
  uStack_30 = 0;
  iStack_2c = 0;
  fn_82517978(&uStack_30,*puVar3,puVar3[1],0);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,&uStack_30);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return;
}

