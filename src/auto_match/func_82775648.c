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
extern int fn_826A8E58();
extern int fn_826A93B0();
extern int fn_826A9420();
extern unsigned int iStack_30;
extern unsigned int iStack_3c;
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_82775648(int param_1,int param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined1 uStack_2c;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0xc) == param_1)) {
    iVar1 = *(int *)(param_2 + 8);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) {
      piVar2 = *(int **)(*param_3 + 0xc);
      (**(code **)(*piVar2 + 0x28))(piVar2,param_5);
      iStack_30 = iVar1 + 0x1c;
      uStack_2c = 0;
      uVar5 = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      do {
        fn_826A9420(&piStack_40,iVar1);
        while( true ) {
          cVar3 = fn_826A8E58(&piStack_40,&uStack_38);
          if (cVar3 != '\0') break;
          iVar4 = iStack_3c * 0x20 + *piStack_40;
          if (*(uint *)(iVar4 + 0x14) == uVar5) {
            (**(code **)(*piVar2 + 0x68))
                      (piVar2,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                       *(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(iVar4 + 0x20),
                       *(undefined4 *)(iVar4 + 0x24),param_4,&iStack_30);
          }
          fn_826A93B0(&piStack_40);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 2);
    }
  }
  return;
}

