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
extern unsigned int *auStack_24;
extern int fn_8288CDC8();
extern int fn_8288E040();
extern int fn_828C8C90();
extern unsigned int iStack_28;
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_828C9840(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 auStack_24 [36];
  
  puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x18);
  while ((puVar1 != *(undefined4 **)(param_1 + 0x18) && (*(int *)(puVar1[2] + 4) != param_2))) {
    puVar1 = (undefined4 *)*puVar1;
  }
  iStack_30 = **(int **)(param_1 + 0xc);
  iStack_2c = param_2;
  if ((int *)iStack_30 != *(int **)(param_1 + 0xc)) {
    do {
      iVar2 = iStack_30;
      iVar3 = iStack_30 + 0x18;
      puVar1 = (undefined4 *)**(undefined4 **)(iStack_30 + 0x28);
      while ((puVar1 != *(undefined4 **)(iStack_30 + 0x28) && (*(int *)(puVar1[2] + 4) != param_2)))
      {
        puVar1 = (undefined4 *)*puVar1;
      }
      fn_8288E040(&iStack_28,iVar3,&iStack_2c);
      if (iStack_28 != *(int *)(iVar2 + 0x1c)) {
        fn_8288CDC8(auStack_24,iVar3);
      }
      fn_828C8C90(&iStack_30);
    } while (iStack_30 != *(int *)(param_1 + 0xc));
  }
  return;
}

