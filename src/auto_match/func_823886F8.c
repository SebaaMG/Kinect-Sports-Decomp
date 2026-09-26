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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8236FB68();
extern int fn_8237E9D8();
extern int fn_8238CAC8();
extern int fn_8238CC68();
extern int fn_82508078();
extern int fn_82522588();
extern unsigned int iStack_3c;
extern unsigned int lbl_831DCD58;
extern unsigned int uRam831d1b90;


void fn_823886F8(int param_1,int *param_2,int param_3,undefined8 param_4,int param_5)

{
  longlong lVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [56];
  
  if ((param_5 < 0x18) && (*(int *)(&lbl_831DCD58 + param_5 * 4) == 0)) {
    *(undefined4 *)(param_3 + 0x2e4) = 0;
    *(undefined4 *)(param_3 + 0x2e8) = 0;
    *(undefined4 *)(param_3 + 0x2e0) = 0x18;
    *(undefined4 *)(*param_2 + 0x174) = 1;
  }
  else if (*(int *)(*param_2 + 0xd8) == 0) {
    uVar2 = fn_82365BD8(auStack_38,param_2);
    fn_8238CAC8(param_1,uVar2);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
    lVar1 = fn_8236FB68(0xb);
    if (lVar1 != 0) {
      fn_82508078(*(undefined4 *)(iVar4 + 0xa4),lVar1,0);
    }
    iVar4 = *(int *)(param_1 + 8);
    uVar5 = (ulonglong)*(uint *)(iVar4 + 0x30);
    if (uVar5 != *(uint *)(iVar4 + 0x34)) {
      do {
        puVar3 = (undefined4 *)fn_82522588(auStack_40,uVar5);
        fn_8237E9D8(*puVar3,uRam831d1b90);
        if (iStack_3c != 0) {
          fn_822315A0();
        }
        uVar5 = uVar5 + 8;
      } while ((uVar5 & 0xffffffff) != (ulonglong)*(uint *)(iVar4 + 0x34));
    }
    uVar2 = fn_82365BD8(auStack_38,param_2);
    fn_8238CC68(param_1,uVar2);
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

