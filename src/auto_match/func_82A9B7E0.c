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
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A99C98();
extern int fn_82A9A810();
extern int fn_82A9A860();
extern unsigned int lbl_82186E6C;


void fn_82A9B7E0(int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  double dVar4;
  
  if ((param_3[1] != 0) || (*(int *)(param_1 + 0x74) != 0)) {
    fn_82A99BC8(param_2);
    fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2a7c);
    if (*(int *)(param_1 + 0x74) != 0) {
      fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff821cdfb8,1);
    }
    fn_82A9A860(param_2);
    uVar1 = *param_3;
    if (uVar1 < param_3[1] * 0x1c + uVar1) {
      dVar4 = (double)lbl_82186E6C;
      puVar3 = (uint *)(uVar1 + 8);
      do {
        if (puVar3[-2] != 0) {
          fn_82A99BC8(param_2);
          fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff82038d5c);
          fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff82011264,puVar3[-2]);
          fn_82A99B70(param_2,0xffffffff820d2870,0xffffffff820d28e8,
                        (double)(float)((double)(puVar3[-1] & 1) * dVar4 + (double)(puVar3[-1] >> 1)
                                       ));
          uVar1 = *puVar3;
          if (uVar1 != 0xffffffff) {
            fn_82A99B70(param_2,0xffffffff820d2870,0xffffffff820d2a70,
                          (double)(float)((double)(uVar1 & 1) * dVar4 + (double)(uVar1 >> 1)));
          }
          if (puVar3[1] != 0xffffffff) {
            fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820d28bc);
          }
          fn_82A99B70(param_2,0xffffffff820d2864,0xffffffff820293a8,puVar3[2]);
          if (puVar3[3] == 0) {
            fn_82A9A810(param_2);
          }
          else {
            fn_82A99B70(param_2,0xffffffff820157e8);
            param_2[1] = param_2[1] + 1;
            (**(code **)(*param_2 + 0xc))(param_2,puVar3[3],puVar3[4]);
            fn_82A99C98(param_2,0xffffffff82038d5c);
          }
        }
        puVar2 = puVar3 + 5;
        puVar3 = puVar3 + 7;
      } while (puVar2 < (uint *)(param_3[1] * 0x1c + *param_3));
    }
    fn_82A99C28(param_2,0xffffffff820d2a7c);
  }
  return;
}

