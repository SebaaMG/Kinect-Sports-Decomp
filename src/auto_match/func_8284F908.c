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
extern unsigned int *auStack_3c;
extern int fn_8284D780();
extern int fn_82850A78();
extern int fn_82850D08();
extern int fn_8285A7F8();
extern int memcpy();


void fn_8284F908(int param_1,undefined8 param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puStack_40;
  undefined4 auStack_3c;
  
  fn_8284D780(param_3,&puStack_40);
  iVar2 = 0;
  if (*(short *)(param_1 + 0x44) != 0) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)fn_8285A7F8(*(undefined4 *)(*(int *)(param_1 + 0x40) + iVar3),param_2);
      if (*puVar1 < *puStack_40) {
        fn_82850A78(puStack_40,*puVar1,&auStack_3c);
        fn_82850D08(auStack_3c,0,param_4,0);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x44));
  }
  memcpy(*(undefined4 *)(param_4 + 0x18),param_4 + 8,*(undefined4 *)(param_3 + 0x34));
  return;
}

