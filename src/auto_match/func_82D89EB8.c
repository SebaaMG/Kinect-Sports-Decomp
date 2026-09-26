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
extern int fn_82CEF0B8();
extern int fn_82CFF928();
extern int fn_82D93550();


void fn_82D89EB8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_2 + 0x14))
            (param_2,3,0xffffffff8213acc8,*(undefined4 *)(param_1 + 0xb4),
             *(int *)(param_1 + 0xb8) << 2,*(int *)(param_1 + 0xbc) << 2);
  fn_82CEF0B8(param_1,0xffffffff8323cf30,param_2);
  if ((*(ushort *)(param_1 + 0x206) & 0x8000) == 0) {
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821415b0,*(undefined4 *)(param_1 + 0x200),
               (ulonglong)*(ushort *)(param_1 + 0x204) << 2,
               ((ulonglong)*(ushort *)(param_1 + 0x206) & 0x3fff) << 2);
  }
  if (*(int *)(param_1 + 0x214) != 0) {
    fn_82CFF928(param_2,0xffffffff82141598,*(int *)(param_1 + 0x214),0x10,0);
    iVar1 = *(int *)(param_1 + 0x214);
    if ((*(ushort *)(iVar1 + 0xe) & 0x8000) == 0) {
      (**(code **)(*param_2 + 0x14))
                (param_2,3,0xffffffff82141588,*(undefined4 *)(iVar1 + 8),
                 (ulonglong)*(ushort *)(iVar1 + 0xc) << 2,
                 ((ulonglong)*(ushort *)(iVar1 + 0xe) & 0x3fff) << 2);
    }
    puVar2 = *(undefined4 **)(param_1 + 0x214);
    if ((*(ushort *)((int)puVar2 + 6) & 0x8000) == 0) {
      (**(code **)(*param_2 + 0x14))
                (param_2,3,0xffffffff82141574,*puVar2,(ulonglong)*(ushort *)(puVar2 + 1) << 2,
                 ((ulonglong)*(ushort *)((int)puVar2 + 6) & 0x3fff) << 2);
    }
  }
  (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82141568,*(undefined4 *)(param_1 + 0x1f8),0);
  fn_82D93550(param_1,param_2,0xffffffff8323e200);
  return;
}

