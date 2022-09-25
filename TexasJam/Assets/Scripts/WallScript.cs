using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallScript : MonoBehaviour
{

    public float speed;
   

    // Update is called once per frame
    void Update()
    {
        transform.Translate(0f, 0f, -speed * Time.deltaTime, Space.World);
        Destroy(this.gameObject, 20f);
    }
}
